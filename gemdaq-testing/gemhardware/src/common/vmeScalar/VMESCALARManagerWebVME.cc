#include "gem/hw/vmeScalar/VMESCALARManagerWebVME.h"
#include "gem/hw/vmeScalar/VMESCALARManagerVME.h"

#include "xcept/tools.h"

//Constructor
gem::hw::vmeScalar::VMESCALARManagerWebVME::VMESCALARManagerWebVME(gem::hw::vmeScalar::VMESCALARManagerVME* vmeScalarApp) :
  gem::base::GEMWebApplication(vmeScalarApp)
{
	/* Things to be done on construction */
}

gem::hw::vmeScalar::VMESCALARManagerWebVME::~VMESCALARManagerWebVME()
{
 	/* Things to be done on destruction */
}

/*To be filled in with the monitor page code*/
void gem::hw::vmeScalar::VMESCALARManagerWebVME::monitorPage(xgi::Input * in, xgi::Output * out)
  throw (xgi::exception::Exception)
{
  INFO("monitorPage");
  //fill this page with the generic views for the VMESCALARManagerVME
  //different tabs for certain functions
  *out << "monitorPage</br>" << std::endl;
}

/*To be filled in with the expert page code*/
void gem::hw::vmeScalar::VMESCALARManagerWebVME::expertPage(xgi::Input * in, xgi::Output * out)
  throw (xgi::exception::Exception)
{
  INFO("expertPage");
  //fill this page with the expert views for the VMESCALARManagerVME
  *out << "expertPage</br>" << std::endl;
}

