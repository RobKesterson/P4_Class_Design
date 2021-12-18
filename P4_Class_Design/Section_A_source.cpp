#include "Section_A_header.h"

//To keep this simple, consider a URL only to have a scheme, authority, and path (you can use the same code you wrote in a previous project). 
Url::Url(std::string url_input)
{
	int colon_marker = url_input.find(":");
	int single_slash_marker = url_input.find("/", colon_marker + 3);

	url_full = url_input;
	scheme = url_input.substr(0, colon_marker + 1);
	authority = url_input.substr(colon_marker + 1, single_slash_marker - colon_marker - 1);
	path = url_input.substr(single_slash_marker);
}

std::string Url::getUrl_full() { return url_full; }
std::string Url::getScheme() { return scheme; }
std::string Url::getAuthority() { return authority; }
std::string Url::getPath() { return path; }
