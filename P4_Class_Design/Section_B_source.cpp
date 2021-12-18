#include "Section_B_header.h"

//To keep this simple, consider a URL only to have a scheme, authority, and path (you can use the same code you wrote in a previous project). 
CameraImage::CameraImage(std::string fileName, std::string imageType, std::string dateCreated, double imageSize, std::string imageAuthor, int imageWidth, int imageHeight, std::string apertureSize,
	std::string exposureTime, int isoValue, bool flashEnabled)
{
	bool validImageType = false;

	if (imageType == "PNG" or imageType == "GIF" or imageType == "JPEG")
	{
		validImageType = true;
	}

	bool validCreationDate = false;
	int month = std::stoi(dateCreated.substr(0, 2));
	int day = std::stoi(dateCreated.substr(3, 2));
	int year = std::stoi(dateCreated.substr(6, 4));
	if (1 <= month <= 12 and 1 <= day <= 31 and year > 0)
	{
		validCreationDate = true;
	}

	bool validExposureTime = false;
	if (exposureTime.find("/") != 0)
	{
		int slashCounter = exposureTime.find("/");
		int firstInt = std::stoi(exposureTime.substr(0, slashCounter));
		int secondInt = std::stoi(exposureTime.substr(slashCounter + 1));
		if (firstInt > 0 and secondInt > 0)
		{
			validExposureTime = true;
		}
	}

	if (validImageType and validCreationDate and validExposureTime and imageWidth > 0 and imageHeight > 0 and isoValue > 0)
	{
		file_name = fileName;
		image_type = imageType;
		date_created = dateCreated;
		size = imageSize;
		author = imageAuthor;
		width = imageWidth;
		height = imageHeight;
		aperture_size = apertureSize;
		exposure_time = exposureTime;
		iso_value = isoValue;
		flash_enabled = flashEnabled;
	}
}

/*
Prevent invalid values - particularly with the
image type, you should not be able to change the image type to an invalid type.
*/

std::string CameraImage::getFileName() { return file_name; }
void CameraImage::setFileName(std::string UpdatedName)
{
	file_name = UpdatedName;
}

std::string CameraImage::getImageType() { return image_type; }
void CameraImage::setImageType(std::string UpdatedImagetype)
{
	if (UpdatedImagetype == "PNG" or UpdatedImagetype == "GIF" or UpdatedImagetype == "JPEG")
	{
		image_type = UpdatedImagetype;
	}
}

std::string CameraImage::getDateCreated() { return date_created; }
void CameraImage::setDateCreated(std::string UpdatedDateCreated)
{
	//date created will follow format MM/DD/YYYY
	int month = std::stoi(UpdatedDateCreated.substr(0, 2));
	int day = std::stoi(UpdatedDateCreated.substr(3, 2));
	int year = std::stoi(UpdatedDateCreated.substr(6, 4));
	if (1 <= month <= 12 and 1 <= day <= 31 and year > 0)
	{
		date_created = UpdatedDateCreated;
	}

}

double CameraImage::getSize() { return size; }
void CameraImage::setSize(double UpdatedSize)
{
	if (UpdatedSize > 0)
	{
		size = UpdatedSize;
	}
}

std::string CameraImage::getAuthor() { return author; }
void CameraImage::setAuthor(std::string UpdatedAuthor)
{
	author = UpdatedAuthor;
}

int CameraImage::getWidth() { return width; }
void CameraImage::setWidth(int UpdatedWidth)
{
	if (UpdatedWidth > 0)
	{
		width = UpdatedWidth;
	}
}

int CameraImage::getHeight() { return height; }
void CameraImage::setHeight(int UpdatedHeight)
{
	if (UpdatedHeight > 0)
	{
		height = UpdatedHeight;
	}
}

std::string CameraImage::getApertureSize() { return aperture_size; }
void CameraImage::setApertureSize(std::string UpdatedApertureSize)
{
	if (UpdatedApertureSize.find("f/", 0) == 0)
	{
		aperture_size = UpdatedApertureSize;
	}
}

//exposure time
std::string CameraImage::getExposureTime() { return exposure_time; }
void CameraImage::setExposureTime(std::string UpdatedExposureTime)
{
	if (UpdatedExposureTime.find("/") != 0)
	{
		int slashCounter = UpdatedExposureTime.find("/");
		int firstInt = std::stoi(UpdatedExposureTime.substr(0, slashCounter));
		int secondInt = std::stoi(UpdatedExposureTime.substr(slashCounter + 1));
		if (firstInt > 0 and secondInt > 0)
		{
			exposure_time = UpdatedExposureTime;
		}
	}
}

int CameraImage::getIsoValue() { return iso_value; }
void CameraImage::setIsoValue(int UpdatedIsoValue)
{
	if (UpdatedIsoValue > 0)
	{
		iso_value = UpdatedIsoValue;
	}
}

bool CameraImage::getFlashEnabled() { return flash_enabled; }
void CameraImage::setFlashEnabled(bool UpdatedFlashBool)
{
	flash_enabled = UpdatedFlashBool;
}