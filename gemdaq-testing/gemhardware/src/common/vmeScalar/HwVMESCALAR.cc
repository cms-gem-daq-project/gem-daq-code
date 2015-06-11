#include "gem/hw/vmeScalar/HwVMESCALAR.h

gem::hw::vmeScalar::HwVMESCALAR::HwVMESCALAR(const log4cplus::Logger& vmeScalarLogger):
  gem::hw::GEMHwDeviceVME::GEMHwDeviceVME(vmeScalarLogger)
  //logVMESCALAR_(optohybridApp->getApplicationLogger()),
  //hwVMESCALAR_(0),
  //monVMESCALAR_(0)
  
{
  //Based on uTCA header, need to convert to VME
  //setDeviceID("VMESCALARHw");
  //setAddressTableFileName("vmeScalar_address_table.xml");
  //setIPbusProtocolVersion("2.0");				//<--- This needs to be changed to be some sort of VME Bus protocol
  //setDeviceBaseNode("OptoHybrid");
  //gem::hw::vmeScalar::HwVMESCALAR::initDevice();
}

gem::hw::vmeScalar::HwVMESCALAR::~HwVMESCALAR()
{
  releaseDevice();
}
