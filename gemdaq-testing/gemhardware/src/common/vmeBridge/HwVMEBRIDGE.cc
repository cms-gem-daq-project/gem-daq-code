#include "gem/hw/vmeBridge/HwVMEBRIDGE.h

gem::hw::vmeBridge::HwVMEBRIDGE::HwVMEBRIDGE(const log4cplus::Logger& vmeBridgeLogger):
  gem::hw::GEMHwDeviceVME::GEMHwDeviceVME(vmeBridgeLogger)
  //logVMEBRIDGE_(optohybridApp->getApplicationLogger()),
  //hwVMEBRIDGE_(0),
  //monVMEBRIDGE_(0)
  
{
  //Based on uTCA header, need to convert to VME
  //setDeviceID("VMEBRIDGEHw");
  //setAddressTableFileName("vmeBridge_address_table.xml");
  //setIPbusProtocolVersion("2.0");				//<--- This needs to be changed to be some sort of VME Bus protocol
  //setDeviceBaseNode("OptoHybrid");
  //gem::hw::vmeBridge::HwVMEBRIDGE::initDevice();
}

gem::hw::vmeBridge::HwVMEBRIDGE::~HwVMEBRIDGE()
{
  releaseDevice();
}
