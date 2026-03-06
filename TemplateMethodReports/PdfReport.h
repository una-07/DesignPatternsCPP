#ifndef PDFREPORT_H
#define PDFREPORT_H

#include "ReportGenerator.h"

class PdfReport : public ReportGenerator {

protected:

    void formatData() override {
        std::cout << "Formatting data for PDF\n";
    }

    void createHeader() override {
        std::cout << "Creating PDF header\n";
    }
};

#endif
