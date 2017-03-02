#ifndef INTSUITE_INC_PPAIRS_H_
#define INTSUITE_INC_PPAIRS_H_

#include "Proximities.h"

class ProcessBAM{
    friend class PromoterClass;
    //friend class ProbeSet;
    friend class ProximityClass;
public:
    std::map<int, std::string> RefIDtoChrNames;
    std::map<std::string, int> ChrNamestoRefID;


    void Initialize(std::string, int, int, int);
  
    void ProcessSortedBAMFile(ProbeSet&, ProbeRESitesClass, ProximityClass, std::string, int, std::string, std::string, std::string);
    void ProcessSortedBamFile_NegCtrls(ProbeSet&, ProbeRESitesClass, ProximityClass, std::string, int, std::string, std::string);    
    void ProcessSortedBAMFileForEnhancers(ProbeSet&, ProbeRESitesClass, ProximityClass , std::string, int, std::string, std::string, std::string, EnhancerSet&);
    
    ProcessBAM(OutStream& blog) : bLog (blog) {}
    
private:
    std::map<int, int> RefIDtoChrLength;
    OutStream& bLog;
    int NOFEXPERIMENTS;
    int padding;
    int ReadLen;
    OutStream& pLog;
};


#endif //INTSUITE_INC_PPAIRS_H_