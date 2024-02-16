// Require the necessary discord.js classes
const { Client, GatewayIntentBits, Intents } = require('discord.js');
const { exec } = require("child_process");


// Create a new client instance
const client = new Client({
	intents: [GatewayIntentBits.MessageContent, GatewayIntentBits.GuildMessages, GatewayIntentBits.Guilds]
})

// When the client is ready, run this code (only once)
client.once('ready', () => {
	console.log('Ready!');
});


client.on("messageCreate", (msg)=> {
    console.log(msg.content.split(" ")[1])
    if(msg.content.startsWith("!ard") ){
    	exec(`cat /dev/ttyUSB0 &`);
        exec(`echo -n \"${msg.content.split(" ")[1]}\" > /dev/ttyUSB0`);
    }
})

// Login to Discord with your client's token
client.login("MTAxMzUwMzk1ODU4Njc2NTMyMg.GYc1Wt.XEzcEBvmskZyopRdop5FUwlXeXtv7_UOf4wxBg");
