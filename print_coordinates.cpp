#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main()
{
  std::ifstream file("coordinates.txt");
  std::string line;

  if (!file.is_open())
  {
    std::cerr << "Ошибка файла!" << std::endl;
    return 1;
  }

  while (std::getline(file, line))
  {
    std::istringstream iss(line);
    double latitude, longitude;
    char delimiter;

    if (!(iss >> delimiter >> latitude >> delimiter >> longitude >> delimiter) || delimiter != ')')
    {
      std::cerr << "Ошибка при разборе строки: " << line << std::endl;
      continue;
    }

    // Проверяем, находятся ли координаты в указанных пределах
    if (latitude >= 50 && latitude <= 80 && longitude >= 20 && longitude <= 45)
    {
      std::cout << "(" << latitude << ", " << longitude << ")" << std::endl;
    }
  }

  file.close();
  return 0;
}
