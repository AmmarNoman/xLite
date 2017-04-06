
-----------------------------------------------------------------------
Status:     WIP (Need uregnt update)
Date:       2017-04-06
-----------------------------------------------------------------------


SnoopSnitch xLite
=================

This is the SnoopSnitch xLite source-code repository. SnoopSnitch xLite is a
light weight and independently funded, extended support version of the
original SnoopSnitch from Security Research Labs.

SnoopSnitch collects and analyzes mobile radio data to make you aware of your
mobile network security and to warn you about threats like fake base stations
(IMSI catchers), user tracking and over-the-air updates.


License
-------

Copyright (C) 2014-2016  GPLv3  Security Research Labs
Copyright (C) 2017       GPLv3  EFF

This program is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later
version. See COPYING for details.

Resources
---------

Project Website:       https://opensource.srlabs.de/projects/snoopsnitch
Public Git repository: https://opensource.srlabs.de/git/snoopsnitch.git
Mailing list:          https://lists.srlabs.de/cgi-bin/mailman/listinfo/gsmmap
Email:			       snoopsnitch@srlabs.de 
PGP:                   9728 A7F9 D457 1FBB 746F  5381 D52C AC10 634A 9561

Building from source
--------------------

SnoopSnitch - including helper binaries - is known to build sucessfully on
Linux and OS X. When using the prebuilt helper binaries contained in the
repository, the app may also build on Windows.

To build SnoopSnitch you need the Android SDK [1] for building the actual app
and the Android NDK [2] to build the native components like the Qualcomm DIAG
wrapper or the GSM parser. Download SDK and NDK and install it somewhere in
your file system. Set the environment variable NDK and SDK to the respective
paths:

	$ export ANDROID_HOME=<your_sdk_dir>
	$ export NDK_DIR=<your_ndk_dir>

IMPORTANT NOTE: contrib/prebuilt/ contains binaries to allow e.g. windows users
to build and deploy the SnoopSnitch app easily. However, you can rebuild
everything contained in contrib/prebuilt - including the libasn1c and
libosmocore projects we depend on - from source using the contrib/compile.sh
script. The source of those projects is pulled in by the build scripts through
sub-modules.

As SnoopSnitch ships with the prebuilt binaries, the following step is optional.
To build the parser binary from source, the ant packages are required:

	$ sudo apt-get install ant default-jdk

In the SnoopSnitch source directory do the following:

	$ cd contrib/
	$ ./compile.sh -t android -g -u

To build the app, in the SnoopSnitch source directory do the following:

	$ cd SnoopSnitch
	$ ant debug

Please please consult the Android documentation on how to set up the tools and
perform a release build.


[1] https://developer.android.com/sdk/
[2] https://developer.android.com/tools/sdk/ndk/

-------------------------------------------------------------------------------
 app permissions
-------------------------------------------------------------------------------

The following permissions are required to run SnoopSnitch:

    ACCESS_SUPERUSER: 		Open Qualcomm diagnosis interface to capture radio data
    CALL_PHONE, 
    READ_PHONE_STATE, 
    SEND_SMS, 
    RECEIVE_SMS: 			Generate mobile network traffic recorded in active tests
    GET_TASKS: 				Retrieve state of helper processes interacting with diagnosis interface
    WAKE_LOCK: 				Acquire CPU for long-running analysis steps
    ACCESS_FINE_LOCATION, 
    ACCESS_COARSE_LOCATION: record location of IMSI catchers and security events if configured
    INTERNET: 				Download new data from gsmmap.org, upload radio traces and debug logs upon request
    ACCESS_NETWORK_STATE: 	Postpone uploads until network is available

In addition, the app requires root privileges, which are only used to access the /dev/diag interface from which baseband information is read.














