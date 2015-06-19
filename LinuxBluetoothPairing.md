# Introduction #

Requires bluetooth and bluez-utils


# Details #

Use `hcitool scan` to find the EZB MAC address

then edit `/var/lib/bluetooth/00:01:02:03:04:05/pincodes`
(where 00:01:02:03:04:05 is the address of your linux bluetooth device)

and add to that file

`00:0A:0B:0C:0D:0E 1234`   (where 00:0A:0B:0C:0D:0E is the EZB MAC address)

Then do a
`/etc/init.d bluetooth restart`


(see [here](http://blog.tremily.us/posts/Bluetooth/) for more info)