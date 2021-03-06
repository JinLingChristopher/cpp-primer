//
// Created by king on 2019/4/25.
//

#ifndef CPP_PRIMER_STRBLOB_HPP
#define CPP_PRIMER_STRBLOB_HPP

#include <vector>
#include <string>
#include <initializer_list>
#include <memory>

class StrBlobPtr;
class ConstStrBlobPtr;

class StrBlob {
    friend class StrBlobPtr;
    friend class ConstStrBlobPtr;

public:
    typedef std::vector<std::string>::size_type size_type;

    StrBlob();

    StrBlob(const StrBlob& b);
    StrBlob& operator=(const StrBlob& b);

    StrBlob(std::initializer_list<std::string> il);

    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    void push_back(const std::string &s);
    void pop_back();

    std::string &front();
    const std::string &front() const;
    std::string &back();
    const std::string &back() const;

    StrBlobPtr begin();
    StrBlobPtr end();

    ConstStrBlobPtr const_begin() const;
    ConstStrBlobPtr const_end() const;

private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type pos, const std::string &msg) const;

};

#endif //CPP_PRIMER_STRBLOB_HPP
