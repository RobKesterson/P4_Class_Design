#include <iostream>
#include <string.h>
#include "Section_A_header.h"
#include "Section_B_header.h"
#include "Section_C_header.h"

//section B
void printImageMetadata(CameraImage ci)
{
	std::cout << "file anme = " + ci.getFileName() + "\n";
	std::cout << "image type = " + ci.getImageType() + "\n";
	std::cout << "date created = " + ci.getDateCreated() + "\n";
	std::string a = std::to_string(ci.getSize());
	std::cout << "size = " + a + "\n";

	std::cout << "author = " + ci.getAuthor() + "\n";
	std::string b = std::to_string(ci.getWidth());
	std::cout << "width = " + b + "\n";
	std::string c = std::to_string(ci.getHeight());
	std::cout << "height = " + c + "\n";
	std::cout << "aperture size = " + ci.getApertureSize() + "\n";

	std::cout << "exposure time = " + ci.getExposureTime() + "\n";
	std::string d = std::to_string(ci.getIsoValue());
	std::cout << "iso value = " + d + "\n";
	std::string e = std::to_string(ci.getFlashEnabled());
	std::cout << "flash enabled = " + e + "\n";
	std::cout << "\n";
}

void printStoreContents(Store s)
{

}

int main()
{
	//Section A - Design a class for representing a web URL.
	Url url1("https://magic.com/forest");
	std::cout << "full url = " + url1.getUrl_full() + "\n";
	std::cout << "scheme = " + url1.getScheme() + "\n";
	std::cout << "authority = " + url1.getAuthority() + "\n";
	std::cout << "path = " + url1.getPath() + "\n";
	std::cout << "\n";
	

	//Section B - Design a class for managing the metadata for an image taken by a camera.
	CameraImage ci1("test", "PNG", "12/17/2021", 60.5, "Hunter S. Thompson", 10, 20, "f/60", "1/20", 75, false);
	/*
	* Provide an external function (not a member function) that takes an image metadata object, and prints out all of
	the above information. The format of how this is printed is up to you, just make sure all the data is present.
	*/
	printImageMetadata(ci1);

	//Section C - Design a set of classes and functions to manage an online store.
	Item i1("Book", 3333333333333333, 14.50, 30);
	Store s1(i1);
	//Provide a function to print out the full contents of the store with each item and the number of that item in stock:
	printStoreContents(s1);

}