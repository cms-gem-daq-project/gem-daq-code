#include "gem/hw/vmeBridge/VMEBRIDGEManagerWebVME.h"
#include "gem/hw/vmeBridge/VMEBRIDGEManagerVME.h"

#include "xcept/tools.h"

//Constructor
gem::hw::vmeBridge::VMEBRIDGEManagerWebVME::VMEBRIDGEManagerWebVME(gem::hw::vmeBridge::VMEBRIDGEManagerVME* vmeBridgeApp) :
  gem::base::GEMWebApplication(vmeBridgeApp)
{
	/* Things to be done on construction */
}

gem::hw::vmeBridge::VMEBRIDGEManagerWebVME::~VMEBRIDGEManagerWebVME()
{
 	/* Things to be done on destruction */
}

/*To be filled in with the monitor page code*/
void gem::hw::vmeBridge::VMEBRIDGEManagerWebVME::monitorPage(xgi::Input * in, xgi::Output * out)
  throw (xgi::exception::Exception)
{
  INFO("monitorPage");
  //fill this page with the generic views for the VMEBRIDGEManagerVME
  //different tabs for certain functions
  *out << "monitorPage</br>" << std::endl;
}

/*To be filled in with the expert page code*/
void gem::hw::vmeBridge::VMEBRIDGEManagerWebVME::expertPage(xgi::Input * in, xgi::Output * out)
  throw (xgi::exception::Exception)
{
  INFO("expertPage");
  //fill this page with the expert views for the VMEBRIDGEManagerVME
  *out << "expertPage</br>" << std::endl;
}

