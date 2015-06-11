#include "gem/hw/vmeTDC/HwVMETDC.h

gem::hw::vmeTDC::HwVMETDC::HwVMETDC(const log4cplus::Logger& vmeTDCLogger):
  gem::hw::GEMHwDeviceVME::GEMHwDeviceVME(vmeTDCLogger)
  //logVMETDC_(optohybridApp->getApplicationLogger()),
  //hwVMETDC_(0),
  //monVMETDC_(0)
  
{
  //Based on uTCA header, need to convert to VME
  //setDeviceID("VMETDCHw");
  //setAddressTableFileName("vmeTDC_address_table.xml");
  //setIPbusProtocolVersion("2.0");				//<--- This needs to be changed to be some sort of VME Bus protocol
  //setDeviceBaseNode("OptoHybrid");
  //gem::hw::vmeTDC::HwVMETDC::initDevice();
}

gem::hw::vmeTDC::HwVMETDC::~HwVMETDC()
{
  releaseDevice();
}
