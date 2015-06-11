#include "gem/hw/vmeDisc/HwVMEDISC.h

gem::hw::vmeDisc::HwVMEDISC::HwVMEDISC(const log4cplus::Logger& vmeDiscLogger):
  gem::hw::GEMHwDeviceVME::GEMHwDeviceVME(vmeDiscLogger)
  //logVMEDISC_(optohybridApp->getApplicationLogger()),
  //hwVMEDISC_(0),
  //monVMEDISC_(0)
  
{
  //Based on uTCA header, need to convert to VME
  //setDeviceID("VMEDISCHw");
  //setAddressTableFileName("vmeDisc_address_table.xml");
  //setIPbusProtocolVersion("2.0");				//<--- This needs to be changed to be some sort of VME Bus protocol
  //setDeviceBaseNode("OptoHybrid");
  //gem::hw::vmeDisc::HwVMEDISC::initDevice();
}

gem::hw::vmeDisc::HwVMEDISC::~HwVMEDISC()
{
  releaseDevice();
}
