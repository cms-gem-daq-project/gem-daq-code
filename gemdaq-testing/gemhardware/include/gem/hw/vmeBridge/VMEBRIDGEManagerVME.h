#ifndef gem_hw_vmeBridge_VMEBRIDGEManager_h
#define gem_hw_vmeBridge_VMEBRIDGEManager_h

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

    namespace vmeBridge {

      class HwVMEBRIDGE;
      
      //friend class VMEBRIDGEManagerWebVME;

      //It should be one of the two lines, choose the one that is required
      //class VMEBRIDGEManagerVME: public gem::base::GEMWebApplication, public gem::base::GEMFSMApplication
      class VMEBRIDGEManagerVME: public xdaq::WebApplication, public xdata::ActionListener 
	{

	  public:
	  //public data members
	  //===================
	  /* define public data members here */

	  //public methods
	  //==============
	  //XDAQ_INSTANTIATOR();

	  //Constructor
	  VMEBRIDGEManagerVME(/* parameters */);

	  //Destructor
	  ~VMEBRIDGEManagerVME();

	  /* define additional public methods below */

	protected:
	  //protected data members
	  //======================
	  /* define protected data members here */

	  //protected methods
	  //=================
	  /* define protected methods below */

      }; //End class VMEBRIDGEManagerVME

    } //End namespace gem::hw::vmeBridge

  } //End namespace gem::hw

} //End namespace gem

#endif
