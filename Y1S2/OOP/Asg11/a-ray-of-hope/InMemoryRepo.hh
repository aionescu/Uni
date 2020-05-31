#ifndef IN_MEMORY_REPO_HH
#define IN_MEMORY_REPO_HH

#include <string>
#include <vector>
#include "Domain.hh"
#include "Repo.hh"

// Represents a repository of tasks.
class InMemoryRepo: public Repo {
protected:
  std::vector<Task> _tasks;

public:
  // Attempts to add the specified task to this repository, if it
  // does not already exist.
  void add(const Task& newTask) override;

  // Attempts to update the specified task in this repository,
  // if it exists.
  Task update(const Task& newTask) override;

  // Attempts to remove the task with the specified title
  // from this repository, if it exists.
  Task remove(const std::string& title) override;

  std::string filePath() const override;

  // Returns a copy of this repository's data.
  std::vector<Task> data() override;
};

#endif