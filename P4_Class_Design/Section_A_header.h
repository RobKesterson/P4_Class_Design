#include <string>

class Url {
	public:
		/*
		* Your class should have a constructor that takes a std::string as a parameter.
		* You should not be able to edit(modify) the URL once it is created.
		*/
		Url(std::string url_input);

		// You should have four getter functions which return the full URL as a string, and each of the three components individually also as strings.
		
		std::string getUrl_full();
		std::string getScheme();
		std::string getAuthority();
		std::string getPath();

	private:
		std::string url_full;
		std::string scheme;
		std::string authority;
		std::string path;

};
