#include "gem/hw/template/HwTEMPLATE.h

gem::hw::template::HwTEMPLATE::HwTEMPLATE(const log4cplus::Logger& templateLogger):
  gem::hw::GEMHwDeviceVME::GEMHwDeviceVME(templateLogger)
  //logTEMPLATE_(optohybridApp->getApplicationLogger()),
  //hwTEMPLATE_(0),
  //monTEMPLATE_(0)
  
{
  //Based on uTCA header, need to convert to VME
  //setDeviceID("TEMPLATEHw");
  //setAddressTableFileName("template_address_table.xml");
  //setIPbusProtocolVersion("2.0");				//<--- This needs to be changed to be some sort of VME Bus protocol
  //setDeviceBaseNode("OptoHybrid");
  //gem::hw::template::HwTEMPLATE::initDevice();
}

gem::hw::template::HwTEMPLATE::~HwTEMPLATE()
{
  releaseDevice();
}
