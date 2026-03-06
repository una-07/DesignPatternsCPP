#ifndef REPORTGENERATOR_H
#define REPORTGENERATOR_H

#include <iostream>

class ReportGenerator {
public:

    void generateReport() {
        fetchData();
        formatData();
        createHeader();
        saveReport();
    }

protected:

    void fetchData() {
        std::cout << "Fetching data\n";
    }

    virtual void formatData() = 0;
    virtual void createHeader() = 0;

    virtual void saveReport() {
        std::cout << "Saving report\n";
    }
};

#endif
