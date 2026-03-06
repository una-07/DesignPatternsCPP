#ifndef HTMLREPORT_H
#define HTMLREPORT_H

#include "ReportGenerator.h"

class HtmlReport : public ReportGenerator {

protected:

    void formatData() override {
        std::cout << "Formatting HTML\n";
    }

    void createHeader() override {
        std::cout << "Creating HTML header\n";
    }
};

#endif
