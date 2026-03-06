#include "PdfReport.h"
#include "ExcelReport.h"
#include "HtmlReport.h"

int main() {

    PdfReport pdf;
    ExcelReport excel;
    HtmlReport html;

    pdf.generateReport();
    excel.generateReport();
    html.generateReport();

}
