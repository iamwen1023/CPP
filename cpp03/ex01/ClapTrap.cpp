#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):_name("Default"),_hit_points(100),_energy_points(50),_attack_damage(20)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string const name):_name(name),_hit_points(100),_energy_points(50),_attack_damage(20)
{
    std::cout << "ClapTrap String constructor called" << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = src;
}
ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & rhs)
{
    std::cout << "ClapTrap Assignment operator called" << std::endl;
    this->_name = rhs.getName();
    this->_hit_points = rhs.getHitPoints();
    this->_energy_points = rhs.getEnergyPoints();
    this->_attack_damage = rhs.getAttackDamage();
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energy_points > 0 && this->_attack_damage > 0 && this->_hit_points > 0)
    {
        std::cout << "ClapTrap " << this->_name <<" attacks "<< target << ", causing "<< this->_attack_damage << " points of damage!\n";
        this->_energy_points -= 1;
    }
    else 
    {
        std::cout << "ClapTrap " << this->_name << " can not attack\n";
    }
    //?target.takeDamage()?
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount <= 0)
    {
        std::cout << amount << "<= 0" << std::endl;
        return ;
    }
    std::cout << this->_name << " take " << amount << " Damage." << std::endl;
    this->_hit_points -= amount;
    if (this->_hit_points <= 0)
    {
        std::cout << this->_name << "is dead!" << std::endl;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{   
    if (amount <= 0)
    {
        std::cout << amount << "<= 0" << std::endl;
        return ;
    }
    if (this->_energy_points > 0 && this->_hit_points > 0)
    {
        std::cout << this->_name << " is Repaired +" << amount << std::endl;
        this->_hit_points += amount;
        this->_energy_points -= 1;
    }
    else
    {
        std::cout << "ClapTrap " << this->getName() << " can not be repaired\n";
    }
}
int ClapTrap::getAttackDamage( void ) const
{
    return this->_attack_damage;
}
int ClapTrap::getHitPoints( void ) const
{
    return this->_hit_points;
}
int ClapTrap::getEnergyPoints( void ) const
{
    return this->_energy_points;
}
std::string ClapTrap::getName( void ) const
{
    return this->_name;
}

void ClapTrap::setAttackDamage(int amount)
{
    this->_attack_damage = amount;
}
void ClapTrap::setHitPoints(int amount)
{
    this->_hit_points = amount;
}
void ClapTrap::setEnergyPoints(int amount )
{
    this->_energy_points = amount;
}
void ClapTrap::setName(std::string name)
{
    this->_name = name;;
}