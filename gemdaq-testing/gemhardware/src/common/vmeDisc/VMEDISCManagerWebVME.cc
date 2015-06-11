#include "gem/hw/vmeDisc/VMEDISCManagerWebVME.h"
#include "gem/hw/vmeDisc/VMEDISCManagerVME.h"

#include "xcept/tools.h"

//Constructor
gem::hw::vmeDisc::VMEDISCManagerWebVME::VMEDISCManagerWebVME(gem::hw::vmeDisc::VMEDISCManagerVME* vmeDiscApp) :
  gem::base::GEMWebApplication(vmeDiscApp)
{
	/* Things to be done on construction */
}

gem::hw::vmeDisc::VMEDISCManagerWebVME::~VMEDISCManagerWebVME()
{
 	/* Things to be done on destruction */
}

/*To be filled in with the monitor page code*/
void gem::hw::vmeDisc::VMEDISCManagerWebVME::monitorPage(xgi::Input * in, xgi::Output * out)
  throw (xgi::exception::Exception)
{
  INFO("monitorPage");
  //fill this page with the generic views for the VMEDISCManagerVME
  //different tabs for certain functions
  *out << "monitorPage</br>" << std::endl;
}

/*To be filled in with the expert page code*/
void gem::hw::vmeDisc::VMEDISCManagerWebVME::expertPage(xgi::Input * in, xgi::Output * out)
  throw (xgi::exception::Exception)
{
  INFO("expertPage");
  //fill this page with the expert views for the VMEDISCManagerVME
  *out << "expertPage</br>" << std::endl;
}

