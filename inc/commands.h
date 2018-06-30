#ifndef _SERVER_COMMANDS_H_
#define _SERVER_COMMANDS_H_

#include "irc_server.h"

typedef struct	s_command
{
  const char	*name;
  void		(*command)(t_user*,
			   char*);
}		t_command;

#define CMD(cmd) void		cmd(t_user *user, __attribute__((unused))char *args)
#define SET_CMD(cmd) { #cmd, cmd }

CMD(ADMIN);
CMD(AWAY);
CMD(CNOTICE);
CMD(CPRIVMSG);
CMD(CONNECT);
CMD(DIE);
CMD(ENCAP);
CMD(ERROR);
CMD(HELP);
CMD(INFO);
CMD(INVITE);
CMD(ISON);
CMD(JOIN);
CMD(KICK);
CMD(KILL);
CMD(KNOCK);
CMD(LINKS);
CMD(LIST);
CMD(LUSERS);
CMD(MODE);
CMD(MOTD);
CMD(NAMES);
CMD(NAMSX);
CMD(NICK);
CMD(NOTICE);
CMD(OPER);
CMD(PART);
CMD(PING);
CMD(PONG);
CMD(PRIVMSG);
CMD(QUIT);
CMD(REHASH);
CMD(RESTART);
CMD(RULES);
CMD(SERVER);
CMD(SERVICE);
CMD(SERVLIST);
CMD(SQUERY);
CMD(SQUIT);
CMD(SETNAME);
CMD(SILENCE);
CMD(STATS);
CMD(SUMMON);
CMD(TIME);
CMD(TOPIC);
CMD(TRACE);
CMD(UHNAMES);
CMD(USER);
CMD(USERHOST);
CMD(USERIP);
CMD(USERS);
CMD(VERSION);
CMD(WALLOPS);
CMD(WATCH);
CMD(WHO);
CMD(WHOIS);
CMD(WHOWAS);

#endif