# iOS SDK 가이드(Swift)

## 1. SDK 다운로드 및 설치

### 1.1 SDK 다운로드

#### XCode CocoaPad 환경에서 SDK 다운로드 방법

XCode 프로젝트 파일중 Podfile 파일에 다음과 같이 SDK를 추가합니다

```bat
pod 'RW'
```

기존에 SDK를 한번 설치한 경우에는 설치할SDK 버전을 표시해야 하는 경우도 있습니다. 아래와 같이 설치할 SDK버전을 명시적으로 표시하면 됩니다.

```bat
pod 'RW', '~> 1.0.7'
```

Podfile 에 해당라인을 추가한 후 Terminal 프로그램을 실행하여 다음의 명령을 수행합니다

```bat
cmd> pod install
```

정상적으로 설치가 되면 아래와 같은 폴더 구조를 확인할 수 있습니다.

![](http://www.wisetracker.co.kr/wp-content/uploads/2020/11/RW_frameworks.png)

### 1.2 SDK 세팅

XCode 프로젝트의 info.plist 파일에 제공받은 App Analytics Key 정보를 추가합니다
info.plist 파일을 open할때 **list로 보기** 가 아니라 **source로 보기**를 선탁하신뒤, 제공받으신 Key를 **Ctrl+V** 하시면 됩니다
serviceNumber를 제공되는 값으로 수정해주세요.

```xml
<key>dotAuthorizationKey</key>
<dict>
	<key>domain</key>
	<key>serviceNumber</key>
	<string>103</string>
	<key>expireDate</key>
	<string>14</string>
	<key>isDebug</key>
	<string>true</string>
	<key>isInstallRetention</key>
	<string>true</string>
	<key>isFingerPrint</key>
	<string>true</string>
	<key>accessToken</key>
	<string></string>
  <key>useMode</key>
  <string>1</string>
</dict>
```

위의 Key 중에 isDebug는 collector 로 전송되는 분석 데이터를 Xcode에서 확인할 수 있게 해주는 boolean 변수로 사용되고 있습니다
SDK를 적용해야 하는 앱 개발자는 이 값을 true로 설정하고, SDK의 기본 적용 및 추가 분석 코드 적용 과정에서 사용할 수 있습니다
( 예를 들면 이 값을 true로 적용하여, 분석 대상이 되는 앱에 적용하여 build를 하면 debug console에서 collector로 전송되는 plain text 형태의 로그 확인이 가능합니다. )
분석 코드 적용이 완료되고, 스토어 배포시에는 해당 필드를 false로 변경하여 배포하는 것을 권장합니다.

http통신을 허용하기 위해 NSAppTransportSecurity 를 아래와 같이 추가합니다

```xml
<key>NSAppTransportSecurity</key>
<dict>
	<key>NSAllowsArbitraryLoads</key>
	<true/>
</dict>
```
