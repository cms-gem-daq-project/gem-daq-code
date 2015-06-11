#ifndef gem_hw_template_TEMPLATEManager_h
#define gem_hw_template_TEMPLATEManager_h

#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/format.hpp>

#include <string>

#include "xdata/String.h"
#include "xdata/UnsignedLong.h"
#include "xdata/UnsignedInteger32.h"

#include "xgi/framework/Method.h"
#include "cgicc/HTMLClasses.h" 

#include "gem/base/GEMFSMApplication.h"

namespace gem {
  namespace base{
    //Uncomment what is necessary
    //class GEMApplication;
    //class GEMFSM;
    //class GEMFSMApplication;
    //class GEMWebApplication;
  }

  namespace hw {

    namespace template {

      class HwTEMPLATE;
      
      //friend class TEMPLATEManagerWebVME;

      //It should be one of the two lines, choose the one that is required
      //class TEMPLATEManagerVME: public gem::base::GEMWebApplication, public gem::base::GEMFSMApplication
      class TEMPLATEManagerVME: public xdaq::WebApplication, public xdata::ActionListener 
	{

	  public:
	  //public data members
	  //===================
	  /* define public data members here */

	  //public methods
	  //==============
	  //XDAQ_INSTANTIATOR();

	  //Constructor
	  TEMPLATEManagerVME(/* parameters */);

	  //Destructor
	  ~TEMPLATEManagerVME();

	  /* define additional public methods below */

	protected:
	  //protected data members
	  //======================
	  /* define protected data members here */

	  //protected methods
	  //=================
	  /* define protected methods below */

      }; //End class TEMPLATEManagerVME

    } //End namespace gem::hw::template

  } //End namespace gem::hw

} //End namespace gem

#endif
