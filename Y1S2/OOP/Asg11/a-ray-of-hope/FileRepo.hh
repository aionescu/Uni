#ifndef FILE_REPO_HH
#define FILE_REPO_HH

#include <string>
#include <vector>
#include "Repo.hh"

class FileRepo : public Repo {
protected:
  std::string _filePath;

  virtual std::vector<Task> _loadData() = 0;
  virtual void _saveData(const std::vector<Task>& tasks) = 0;

public:
  FileRepo(const std::string& filePath);

  std::string filePath() const override;

  void add(const Task& newTask) override;
  Task update(const Task& newTask) override;
  Task remove(const std::string& title) override;

  std::vector<Task> data() override;
};

#endif