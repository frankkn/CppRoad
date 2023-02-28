#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
int main ()
{
  uint64_t N;
  std::cin >> N;
  std::string line;
  std::vector<std::string> position;
  while (std::cin >> line) { position.push_back(line); }
  std::sort(position.begin(), position.end());
  uint64_t prev {}, count {};
  auto it {position.begin()};
  std::vector<bool> is_booked(10, true);
  while (it != position.end())
  {
    uint64_t index {std::stoull(it->substr(0, it->size() - 1))};
    if (prev != index)
    {
      if (!(is_booked[1] || is_booked[2] || is_booked[3] || is_booked[4] || is_booked[5] || is_booked[6] || is_booked[7] || is_booked[8]))
      {
        count += 2;
      }
      else if (!(is_booked[1] || is_booked[2] || is_booked[3] || is_booked[4]))
      {
        ++count;
      }
      else if (!(is_booked[5] || is_booked[6] || is_booked[7] || is_booked[8]))
      {
        ++count;
      }
      else if (!(is_booked[3] || is_booked[4] || is_booked[5] || is_booked[6]))
      {
        ++count;
      }
      std::fill(is_booked.begin(), is_booked.end(), false);
    }
    is_booked[*(it->rbegin()) - 'A'] = true;
    prev = index;
    ++it;
  }
  if (!(is_booked[1] || is_booked[2] || is_booked[3] || is_booked[4] || is_booked[5] || is_booked[6] || is_booked[7] || is_booked[8]))
  {
    count += 2;
  }
  else if (!(is_booked[1] || is_booked[2] || is_booked[3] || is_booked[4]))
  {
    ++count;
  }
  else if (!(is_booked[5] || is_booked[6] || is_booked[7] || is_booked[8]))
  {
    ++count;
  }
  else if (!(is_booked[3] || is_booked[4] || is_booked[5] || is_booked[6]))
  {
    ++count;
  }
  std::cout << count << "\n";
  return 0;
}