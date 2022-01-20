#ifndef _LED_H_
#define _LED_H_

#include <SinricProDevice.h>
#include <Capabilities/PowerStateController.h>

class   
: public SinricProDevice
, public PowerStateController<LED> {
  friend class PowerStateController<LED>;
public:
  LED(const String &deviceId) : SinricProDevice(deviceId, "LED") {};
};

#endif
