# Introduction #

I suggest using ArchLinux from www.raspberrypi.org/downloads as it has the drivers for the wireless cam that comes with the EZ-Robot kit already installed


# Details #

Update the system with
```
pacman -Syu
```

install bluetooth, svn
```
pacman -S bluez svn
```

pair with the EZ Robot as per instructions [here](http://code.google.com/p/ez-openbot/wiki/LinuxBluetoothPairing)

Checkout the code
```
svn checkout http://ez-openbot.googlecode.com/svn/trunk/ ez-openbot
```

and compile as per instructions [here](http://code.google.com/p/ez-openbot/wiki/CompilingTheLibrary)