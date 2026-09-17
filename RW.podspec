Pod::Spec.new do |s|

  s.name         = "RW"
  s.version      = "1.1.66"
  s.summary      = "third party app tracking SDK"
  s.description  = <<-DESC
	                 This is Wisetracker's SDK which tracks app and mobile attribution.
                   DESC
  s.homepage     = "http://www.wisetracker.co.kr"

  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { 'Wisetracker' => 'tech@wisetracker.co.kr' }
  s.ios.deployment_target = '15.0'

  s.source       = { :git => "https://github.com/WisetrackerTechteam/RW-iOS-SDK.git", :tag => s.version.to_s }
  s.ios.vendored_frameworks = 'DOT.xcframework', 'DOTSession.xcframework'
  s.dependency "CouchbaseLite", "~> 3.4"
  s.resources = ["dop-native-sdk-inf.js","NotificationViewController.swift","Base.lproj"]
end
