#ifndef WEB_ANALYZER_H
#define WEB_ANALYZER_H

#include <string>
#include <vector>

// This class is responsible for the core logic of analyzing a website's structure.
// It belongs to the Business Logic Layer.
class WebAnalyzer
{
public:
    // Constructor
    WebAnalyzer();

    // Analyzes the given URL and finds all internal links within the same domain.
    // Returns a vector of strings, where each string is an internal link URL.
    std::vector<std::string> analyzeInternalLinks(const std::string& url);

    // TODO: Add methods for Task B (finding path with keyword) later.
    // For example:
    // std::vector<std::string> findPathToKeyword(const std::string& startUrl, const std::string& keyword);

private:
    // Private helper methods and member variables will go here later.
    // For example:
    // std::string getHtmlContent(const std::string& url);
    // std::vector<std::string> extractLinks(const std::string& htmlContent, const std::string& baseUrl);
    // bool isInternalLink(const std::string& link, const std::string& domain);
    // ... and data structures like a graph to represent the site for Task B

}; // End of WebAnalyzer class definition

#endif // WEB_ANALYZER_H
