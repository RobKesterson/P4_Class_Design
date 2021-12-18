#include <string>

class CameraImage {
public:
	/*
	* The metadata should include at least the following properties:
		File Name (string)
		Image Type (must be one of the following only "PNG", "GIF", or "JPEG")
		Date Created (you can choose how you want to represent a date)
		Size (in MB, stored as a double)
		Author Name (string)
		Image Dimensions (will have width and height)
		Aperture Size (represented as f/# where # is an integer like f/8 or f/22)
		Exposure time (shutter speed, is a fraction of a second like 1/30, or 1/1000)
		ISO value (another integer like 600, or 3000)
		Flash enabled (boolean value)
		
		The image metadata must contain all of these values, and there should never be an uninitialized value.
	*/
	CameraImage(std::string fileName, std::string imageType, std::string dateCreated, double imageSize, std::string imageAuthor, int imageWidth, int imageHeight, std::string apertureSize, std::string exposureTime, int isoValue, bool flashEnabled);

	// Be sure to provide getters and setters so the values can be read and modified.

	std::string getFileName();
	void setFileName(std::string UpdatedName);

	std::string getImageType();
	void setImageType(std::string UpdatedImagetype);

	std::string getDateCreated();
	void setDateCreated(std::string UpdatedDateCreated);

	double getSize();
	void setSize(double UpdatedSize);

	std::string getAuthor();
	void setAuthor(std::string UpdatedAuthor);

	int getWidth();
	void setWidth(int UpdatedWidth);

	int getHeight();
	void setHeight(int UpdatedHeight);

	std::string getApertureSize();
	void setApertureSize(std::string UpdatedApertureSize);

	//exposure time will be represented as a string
	std::string getExposureTime();
	void setExposureTime(std::string UpdatedExposureTime);

	int getIsoValue();
	void setIsoValue(int UpdatedIsoValue);

	bool getFlashEnabled();
	void setFlashEnabled(bool UpdatedFlashBool);


private:
	std::string file_name;
	std::string image_type;
	std::string date_created; //date created will follow format MM/DD/YYYY
	double size;
	std::string author;
	int width;
	int height;
	std::string aperture_size;
	std::string exposure_time;
	int iso_value;
	bool flash_enabled;

};

