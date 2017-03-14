//
//  PrintUsage.h
//  HiCap_ProbeDesigner
//
//  Created by Pelin Sahlen on 02/03/2016.
//  Copyright © 2016 Pelin Sahlen. All rights reserved.
//

#ifndef PrintUsage_h
#define PrintUsage_h

#include <iostream>
#include <iomanip>


static int print_usage()
{
    std::cerr<<std::endl;
    std::cerr<<"Program: HiCapTools (A software suite for Probe Design and Proximity Detection for targeted chromosome conformation capture applications)"<<std::endl;
    std::cerr<<"Contact: Pelin Sahlén <pelin.akan@scilifelab.se>"<<std::endl;
    std::cerr<<std::endl;
    std::cerr<<"Usage:  HiCapTools <option> [arguments]"<<std::endl;
    std::cerr<< "Options:  "<<std::endl;
    std::cerr<<std::endl;
    std::cerr<< "    ProbeDesigner"<<std::endl;
    std::cerr<< '\t'<< "Arguments:"<<std::endl;
    std::cerr<< '\t'<<std::left<<std::setw(25)<<"-c or --chr"<< "the Chromosome to process in the format chrN, where N can be the name/number of the chromosome or All if processing all available chromosomes"<<std::endl;
    std::cerr<<std::endl;
    
    std::cerr<< "    ProximityDetector"<<std::endl;
    std::cerr<< '\t'<<"Arguments:"<<std::endl;
    std::cerr<< '\t'<<std::left<< std::setw(25)<<"-c or --chr" <<"the Chromosome to process in the format chrN, where N can be the name/number of the chromosome or All if processing all available chromosomes"<<std::endl;
    std::cerr<< '\t'<<std::left <<std::setw(25)<<"-m or --outputmode"<<"'ComputeStatsOnly' to compute only the stats or 'PrintProximities' to also find and print proximities"<<std::endl;
    std::cerr<< '\t'<<std::left<< std::setw(25)<<"-p or --proximitytype"<<"'Neg' to print only negative control Probe proximities or 'NonNeg' to print only Feature Probe proximities or 'Both' to print both "<<'\n'<<'\t'<<std::setw(25)<<" "<<std::endl;
    return 0;
}

#endif /* PrintUsage_h */
