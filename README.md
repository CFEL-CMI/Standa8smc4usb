# Standa8smc4usb device server

### Description:
This is TANGO device server implementation for Standa 8SMC4-USB/8SMC5-USB devices. For more information about these devices please refer to the [official documentation](https://en.xisupport.com/projects/enxisupport/wiki).

### Compilation:
Apart from usual Tango 8 libraries you should have libximc installed on your system in order to compile and run the device server. You can grab libximc [here](https://en.xisupport.com/projects/enxisupport/wiki/Software).

### Current bugs and limitations:
* There are no units specified by default. You can get an actual unit for particular field in the [protocol documentation](https://en.xisupport.com/projects/enxisupport/wiki/Communication_protocol_specification).
* Changing custom user units static property requires device server reinitialization. 
* Currently the device server can only be compiled on architectures where int/uint are the same as Tango::DevLong/DevULong (size and alignment).
