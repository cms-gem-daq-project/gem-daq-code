#include "gem/hw/template/TEMPLATEManagerWebVME.h"
#include "gem/hw/template/TEMPLATEManagerVME.h"

#include "xcept/tools.h"

//Constructor
gem::hw::template::TEMPLATEManagerWebVME::TEMPLATEManagerWebVME(gem::hw::template::TEMPLATEManagerVME* templateApp) :
  gem::base::GEMWebApplication(templateApp)
{
	/* Things to be done on construction */
}

gem::hw::template::TEMPLATEManagerWebVME::~TEMPLATEManagerWebVME()
{
 	/* Things to be done on destruction */
}

/*To be filled in with the monitor page code*/
void gem::hw::template::TEMPLATEManagerWebVME::monitorPage(xgi::Input * in, xgi::Output * out)
  throw (xgi::exception::Exception)
{
  INFO("monitorPage");
  //fill this page with the generic views for the TEMPLATEManagerVME
  //different tabs for certain functions
  *out << "monitorPage</br>" << std::endl;
}

/*To be filled in with the expert page code*/
void gem::hw::template::TEMPLATEManagerWebVME::expertPage(xgi::Input * in, xgi::Output * out)
  throw (xgi::exception::Exception)
{
  INFO("expertPage");
  //fill this page with the expert views for the TEMPLATEManagerVME
  *out << "expertPage</br>" << std::endl;
}

