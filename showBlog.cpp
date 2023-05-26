#include <iostream>
#include <vector>

// Base class for content items
class ContentItem {
protected:
    std::string title;
    std::string content;

public:
    ContentItem(const std::string& title, const std::string& content)
        : title(title), content(content) {}

    virtual void display() const = 0;
};

// Derived class for blog posts
class BlogPost : public ContentItem {
private:
    std::string author;
    std::string date;

public:
    BlogPost(const std::string& title, const std::string& content, const std::string& author, const std::string& date)
        : ContentItem(title, content), author(author), date(date) {}

    void display() const override {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Date: " << date << std::endl;
        std::cout << "Content: " << content << std::endl;
        std::cout << "-----------------------------" << std::endl;
    }
};

// Derived class for news articles
class NewsArticle : public ContentItem {
private:
    std::string source;

public:
    NewsArticle(const std::string& title, const std::string& content, const std::string& source)
        : ContentItem(title, content), source(source) {}

    void display() const override {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Source: " << source << std::endl;
        std::cout << "Content: " << content << std::endl;
        std::cout << "-----------------------------" << std::endl;
    }
};

int main() {
    std::vector<ContentItem*> contentItems;

    // Create and add blog posts
    BlogPost* blogPost1 = new BlogPost("First Blog Post", "Content of the first blog post", "John Doe", "2023-05-01");
    contentItems.push_back(blogPost1);

    BlogPost* blogPost2 = new BlogPost("Second Blog Post", "Content of the second blog post", "Jane Smith", "2023-05-10");
    contentItems.push_back(blogPost2);

    // Create and add news articles
    NewsArticle* newsArticle1 = new NewsArticle("Breaking News", "Content of the breaking news article", "CNN");
    contentItems.push_back(newsArticle1);

    NewsArticle* newsArticle2 = new NewsArticle("Sports News", "Content of the sports news article", "ESPN");
    contentItems.push_back(newsArticle2);

    // Display all content items
    for (const auto& item : contentItems) {
        item->display();
    }

    // Clean up memory
    for (const auto& item : contentItems) {
        delete item;
    }

    return 0;
}
