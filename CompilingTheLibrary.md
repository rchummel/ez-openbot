# Introduction #

Requires bluetooth-devel package or the bluetooth lib built manually from source

# Details #

The easiest way is to import the project into Eclipse (linux) or Visual Studio 2010 (windows) and build from there.

To build on command line run, from the source directory

```
g++ *.cpp -olibez-openbot.so -shared -fPIC -lpthread -lbluetooth -lrt
```