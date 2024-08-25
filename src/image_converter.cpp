#include <iostream>
#include <fstream>
#include <vector>
#include "stb_image.h"

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <image.png>" << std::endl;
        return 1;
    }

    const char* filename = argv[1];
    
    int width, height, channels;
    // Load the image
    unsigned char* image_data = stbi_load(filename, &width, &height, &channels, 0);
    if (image_data == nullptr) {
        std::cerr << "Failed to load image: " << filename << std::endl;
        return 1;
    }

    // Calculate the size of the image in bytes
    size_t image_size = width * height * channels;

    // Print image information
    std::cout << "Image width: " << width << std::endl;
    std::cout << "Image height: " << height << std::endl;
    std::cout << "Number of channels: " << channels << std::endl;
    std::cout << "Image size (in bytes): " << image_size << std::endl;

    // Convert image data to a vector of bytes
    std::vector<unsigned char> image_bytes(image_data, image_data + image_size);

    // Optional: Save the byte array to a file
    std::ofstream output_file("image_bytes.bin", std::ios::binary);
    if (output_file.is_open()) {
        output_file.write(reinterpret_cast<const char*>(image_bytes.data()), image_bytes.size());
        output_file.close();
        std::cout << "Byte array saved to 'image_bytes.bin'" << std::endl;
    }

    // Clean up and free the image memory
    stbi_image_free(image_data);

    return 0;
}

