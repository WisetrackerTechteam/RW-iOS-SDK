Pod::Spec.new do |s|

  s.name         = "RW"
  s.version      = "0.0.17"
  s.summary      = "third party app tracking SDK"
  s.description  = <<-DESC
	                 This is Wisetracker's SDK which tracks app and mobile attribution.
                   DESC
  s.homepage     = "http://www.wisetracker.co.kr"

  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { 'Wisetracker' => 'tech@wisetracker.co.kr' }
  s.ios.deployment_target = '9.3'

  s.source       = { :git => "https://github.com/WisetrackerTechteam/RW-iOS-SDK.git", :tag => s.version.to_s }
  s.ios.vendored_frameworks = 'DOT.framework', 'DOTSession.framework'
  s.dependency "CouchbaseLite"
  s.resources = ["dop-native-sdk-inf.js"]
end
