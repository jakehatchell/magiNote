import OpenAI from "openai";

import fs from "fs";

import {} from "dotenv/config";

const openai = new OpenAI ({
  apikey: process.env.OPENAI_API_KEY
});

let string = fs.readFileSync(process.argv[2], "utf8");

const completion = await openai.chat.completions.create({
  model: "gpt-4o-mini",
  messages: [
    {role: "system", content: "Format the notes provided by the user."},
    {role: "user", content: string},
  ],
  store: true,
});

const path = process.argv[2] + "_formatted.md"

fs.writeFile(path, completion.choices[0].message.content, (err) => {
  if (err) { console.error('Error occurred: ', err); }
});

//console.log(completion.choices[0].message);
