#include <iostream>
#include <string>
#include "tinyxml2.h"

int main() {
    // Create an XML document
    tinyxml2::XMLDocument doc;

    // Create the root element
    tinyxml2::XMLElement* root = doc.NewElement("urlset");
    root->SetAttribute("xmlns", "http://www.sitemaps.org/schemas/sitemap/0.9");
    doc.InsertEndChild(root);

    // Create and add URLs to the sitemap
    std::vector<std::string> urls = {
        "http://example.com/page1",
        "http://example.com/page2",
        "http://example.com/page3",
        "http://example.com/page4"
    };

    for (const auto& url : urls) {
        tinyxml2::XMLElement* urlElement = doc.NewElement("url");

        tinyxml2::XMLElement* locElement = doc.NewElement("loc");
        locElement->SetText(url.c_str());
        urlElement->InsertEndChild(locElement);

        root->InsertEndChild(urlElement);
    }

    // Save the XML document to a file
    const char* filename = "sitemap.xml";
    tinyxml2::XMLError saveResult = doc.SaveFile(filename);

    if (saveResult == tinyxml2::XML_SUCCESS) {
        std::cout << "Sitemap generated successfully: " << filename << std::endl;
    } else {
        std::cerr << "Failed to generate sitemap: Error code " << saveResult << std::endl;
    }

    return 0;
}
