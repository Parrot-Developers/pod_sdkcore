Pod::Spec.new do |s|
  s.name                  = "SdkCore"
  s.version               = "7.6.0"
  s.summary               = "Parrot Drone SDK, low level implementation"
  s.homepage              = "https://developer.parrot.com"
  s.license               = "{ :type => 'BSD 3-Clause License', :file => 'LICENSE' }"
  s.author                = "Parrot Drone SAS"
  s.source                = { :git => 'https://github.com/Parrot-Developers/pod_sdkcore.git', :tag => "7.6.0" }
  s.platform              = :ios
  s.ios.deployment_target = '12.0'
  s.vendored_frameworks   = 'SdkCore.framework'
  s.xcconfig              = { 'ONLY_ACTIVE_ARCH' => 'YES' }
end
