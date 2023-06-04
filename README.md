# HWS-HDMI-1CHUHD-CaptureCard
1CH UHD(4K) CaptureCard Linux Driver 
Quick start with the official  HWS  Caputre Card Driver on Linux.    
  
    Open a terminal then execute the installation script:  

    If your system requires module signing (most distributions):  
    $ cd <path-to-package-base-directory>  
    $ ./dkms-install.sh  
    else:  
    $ cd <path-to-package-base-directory>  
    $ ./install.sh  
    After a successful installation, you should see something similar to:  
    Uninstall:  
    $ ./scripts/hws-uninstall.sh  
    Install Successfully!  
    Play with MPlayer(MPlayer must already be installed)  
    =====  
    After a successful driver installation, you can start a capture using VLC，or xawtv    
    for example :  
    $ xawtv -c /dev/video0 -alsa-cap hw:1,0     
