#include "gem/hw/vmeTDC/VMETDCManagerWebVME.h"
#include "gem/hw/vmeTDC/VMETDCManagerVME.h"

#include "xcept/tools.h"

//Constructor
gem::hw::vmeTDC::VMETDCManagerWebVME::VMETDCManagerWebVME(gem::hw::vmeTDC::VMETDCManagerVME* vmeTDCApp) :
  gem::base::GEMWebApplication(vmeTDCApp)
{
	/* Things to be done on construction */
}

gem::hw::vmeTDC::VMETDCManagerWebVME::~VMETDCManagerWebVME()
{
 	/* Things to be done on destruction */
}

/*To be filled in with the monitor page code*/
void gem::hw::vmeTDC::VMETDCManagerWebVME::monitorPage(xgi::Input * in, xgi::Output * out)
  throw (xgi::exception::Exception)
{
  INFO("monitorPage");
  //fill this page with the generic views for the VMETDCManagerVME
  //different tabs for certain functions
  *out << "monitorPage</br>" << std::endl;
}

/*To be filled in with the expert page code*/
void gem::hw::vmeTDC::VMETDCManagerWebVME::expertPage(xgi::Input * in, xgi::Output * out)
  throw (xgi::exception::Exception)
{
  INFO("expertPage");
  //fill this page with the expert views for the VMETDCManagerVME
  *out << "expertPage</br>" << std::endl;
}

