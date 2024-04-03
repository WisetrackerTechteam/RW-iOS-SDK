Pod::Spec.new do |s|

  s.name         = "RW"
  s.version      = "1.1.50"
  s.summary      = "third party app tracking SDK"
  s.description  = <<-DESC
	                 This is Wisetracker's SDK which tracks app and mobile attribution.
                   DESC
  s.homepage     = "http://www.wisetracker.co.kr"

  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { 'Wisetracker' => 'tech@wisetracker.co.kr' }
  s.ios.deployment_target = '9.3'

  s.source       = { :git => "https://github.com/WisetrackerTechteam/RW-iOS-SDK.git", :tag => s.version.to_s }
  s.ios.vendored_frameworks = 'DOT.xcframework', 'DOTSession.xcframework'
  s.dependency "CouchbaseLite"
  s.resources = ["dop-native-sdk-inf.js","NotificationViewController.swift","Base.lproj"]
  s.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end
