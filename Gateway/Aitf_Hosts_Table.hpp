#ifndef AITF_HOSTS_TABLE
#define AITF_HOSTS_TABLE

#include <unordered_map>
#include <boost/bind.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/thread.hpp>
#include <boost/thread/mutex.hpp>
#include <boost/asio.hpp>

#include "Filter_Info.hpp"
#include "Timed_Table.hpp"

class Aitf_Hosts_Table : public Timed_Table{

	public:
		Aitf_Hosts_Table();
		~Aitf_Hosts_Table();
		bool check_from_rate(uint32_t ip);


	private:
		void decrement_from(const boost::system::error_code& e, boost::shared_ptr<boost::asio::deadline_timer> timer, uint32_t ip);
		std::unordered_map<uint32_t, Filter_Info*> hosts;
};

extern Aitf_Hosts_Table* aitf_hosts_table;

#endif
