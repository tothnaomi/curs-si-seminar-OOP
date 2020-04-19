#pragma once
#include "Auto.h"
#include <vector>
#include "Rental.h"


template <class E>
class CrudRepository
{
public:
	virtual E findOne(int id) = 0;

	virtual std::vector<E> findAll() = 0;

	virtual E save(E) = 0;

	virtual E del(int id) = 0;

	virtual E update(E) = 0;

	virtual ~CrudRepository() {};
};

class AutoInMemory : public CrudRepository<Auto*>
{
private:
	std::vector <Auto*> autos;

public:

	Auto* findOne(int id);

	std::vector<Auto*> findAll();

	Auto* save(Auto*);

	Auto* del(int id);

	Auto* update(Auto* aut);

	~AutoInMemory();
};