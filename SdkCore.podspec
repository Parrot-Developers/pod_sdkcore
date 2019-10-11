
Pod::Spec.new do |s|
    s.name                  = "SdkCore"
    s.version               = "1.1.1"
    s.summary               = "Parrot Drone SDK, low level implementation"
    s.homepage              = "https://developer.parrot.com"
    s.license               = "{ :type => 'BSD 3-Clause License', :file => 'LICENSE' }"
    s.author                = "Parrot Drone SAS"
    s.source                = { :git => 'https://github.com/Parrot-Developers/pod_sdkcore.git', :tag => "1.1.1" }
    s.platform              = :ios
    s.ios.deployment_target = '10.0'
    s.vendored_frameworks   = 'SdkCore.framework'
    s.xcconfig              = { 'ONLY_ACTIVE_ARCH' => 'YES' }
end
