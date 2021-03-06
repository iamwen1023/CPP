#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
    public:
        Contact(void);
        ~Contact(void);
        void set_first_name(std::string name);
        void set_last_name(std::string name);
        void set_nick_name(std::string name);
        void set_phone_number(std::string name);
        void set_darkest_secret(std::string name);
        std::string get_first_name(void) const;
        std::string get_last_name(void) const;
        std::string get_nick_name(void) const;
        std::string get_phone_number(void) const;
        std::string get_darkest_secret(void) const;

    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;
};
#endif