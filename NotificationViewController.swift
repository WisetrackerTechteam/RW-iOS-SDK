//
//  NotificationViewController.swift
//  NotificationContentExtension
//
//  Created by Woncheol Heo on 23/12/2019.
//  Copyright © 2019 wisetracker. All rights reserved.
//

import UIKit
import UserNotifications
import UserNotificationsUI

import YouTubePlayer

class NotificationViewController: UIViewController, UNNotificationContentExtension {

    @IBOutlet weak var imagePushContentView: UIView!
    @IBOutlet weak var titleLabel: UILabel!
    @IBOutlet weak var bodyLabel: UILabel!
    @IBOutlet weak var imageView: UIImageView!
    
    @IBOutlet weak var videoPushContentView: UIView!
    @IBOutlet weak var playerLabel: UILabel!
    @IBOutlet weak var player: YouTubePlayerView!
    var videoId: String?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any required interface initialization here.
//        let size = view.bounds.size
//        preferredContentSize = CGSize(width: size.width, height: size.width / 2)
        
        playerLabel.text = "viewDidLoad()"

        player.playerVars = ["playsinline": "1"
            , "controls": "1"
            , "autoplay": 1
            , "showinfo": "1"
            , "autohide":"1"
            , "modestbranding": "1"
            , "rel": 0] as YouTubePlayerView.YouTubePlayerParameters
        print("viewDidLoad()")
    }
    func didReceive(_ notification: UNNotification) {
        let content = notification.request.content
        print("cotent : \(content)")
        
        let mhPredefinedData = content.userInfo["RW_push_payload_WP"] as? [String:Any]
        if let mhPredefinedData = mhPredefinedData {
            if let videoUrlStr = mhPredefinedData["RW_push_payload_MV"] as? String {
                let videoUrl = URL(string: videoUrlStr)
                imagePushContentView.isHidden = true
                videoPushContentView.isHidden = false
                playerLabel.text = "\(videoUrlStr)"
                
                if let videoId = videoUrl?.queryParameters["v"] {
                    player.loadVideoID(videoId)
                }
               
                DispatchQueue.main.asyncAfter(deadline: .now() + 3, execute: {
                    self.player.play()
                })
            }
        }
    }
}


extension URLSession {
    class func downloadImage(atURL url: URL, withCompletionHandler completionHandler: @escaping (Data?, NSError?) -> Void) {
        let dataTask = URLSession.shared.dataTask(with: url) { (data, urlResponse, error) in
            completionHandler(data, nil)
        }
        dataTask.resume()
    }
}


// MARK: - 유튜브 플레이 딜리게이션
extension NotificationViewController: YouTubePlayerDelegate {
    func playerReady(videoPlayer: YouTubePlayerView) {
        player.play()
        playerLabel.text = "playerReady()"
        print(#function)
    }
    func playerStateChanged(videoPlayer: YouTubePlayerView, playerState: YouTubePlayerState) {
        playerLabel.text = "playerStateChanged()"
        print(#function)
    }
    func playerQualityChanged(videoPlayer: YouTubePlayerView, playbackQuality: YouTubePlaybackQuality) {
        playerLabel.text = "playerQualityChanged()"
        print(#function)
    }
}


extension URL {
    var queryParameters: QueryParameters { return QueryParameters(url: self) }
}

class QueryParameters {
    let queryItems: [URLQueryItem]
    init(url: URL?) {
        queryItems = URLComponents(string: url?.absoluteString ?? "")?.queryItems ?? []
        print(queryItems)
    }
    subscript(name: String) -> String? {
        return queryItems.first(where: { $0.name == name })?.value
    }
}
