#ifndef EXCELREPORT_H
#define EXCELREPORT_H

#include "ReportGenerator.h"

class ExcelReport : public ReportGenerator {

protected:

    void formatData() override {
        std::cout << "Formatting Excel tables\n";
    }

    void createHeader() override {
        std::cout << "Creating Excel header\n";
    }

    void saveReport() override {
        std::cout << "Saving Excel file (.xlsx)\n";
    }
};

#endif
