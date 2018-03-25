#ifndef STRINGMOD_H
#define STRINGMOD_H

#include <algorithm> 
#include <cctype>
#include <locale>

// TRIM
// via https://stackoverflow.com/a/217605/4451275

// trim from start (in place)
static inline void ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](int ch) {
        return !std::isspace(ch);
    }));
}

// trim from end (in place)
static inline void rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(), [](int ch) {
        return !std::isspace(ch);
    }).base(), s.end());
}

// trim from both ends (in place)
static inline void trim(std::string &s) {
    ltrim(s);
    rtrim(s);
}

// trim from start (copying)
static inline std::string ltrim_copy(std::string s) {
    ltrim(s);
    return s;
}

// trim from end (copying)
static inline std::string rtrim_copy(std::string s) {
    rtrim(s);
    return s;
}

// trim from both ends (copying)
static inline std::string trim_copy(std::string s) {
    trim(s);
    return s;
}

// END TRIM

// LOWERCASE
// via http://www.cplusplus.com/reference/locale/tolower/

static inline void lowercase (std::string &s)
{
	
	std::locale loc;
	
    for (std::string::size_type i = 0; i < s.length(); ++i)
	{
		
       s[i] = std::tolower(s[i],loc);
   }
}

static inline std::string lowercase_copy (std::string s)
{
	
	std::locale loc;
	
	for (std::string::size_type i = 0; i < s.length(); ++i)
	{
		
		s[i] = std::tolower(s[i],loc);
	}
	
	return s;
}

// END LOWERCASE

#endif /* end of include guard: STRINGMOD_H */
